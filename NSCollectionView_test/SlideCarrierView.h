//
//  SlideCarrierView.h
//  NSCollectionView_test
//
//  Created by Gregory Casamento on 9/21/21.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN
#define SLIDE_WIDTH           140.0     // width  of the SlideCarrier image (which includes shadow margins) in points, and thus the width  that we give to a Slide's root view
#define SLIDE_HEIGHT          140.0     // height of the SlideCarrier image (which includes shadow margins) in points, and thus the height that we give to a Slide's root view

#define SLIDE_SHADOW_MARGIN    10.0     // margin on each side between the actual slide shape edge and the edge of the SlideCarrier image
#define SLIDE_CORNER_RADIUS     8.0     // corner radius of the slide shape in points
#define SLIDE_BORDER_WIDTH      4.0     // thickness of border when shown, in points

@interface SlideCarrierView : NSView
{
    NSCollectionViewItemHighlightState highlightState;
    BOOL selected;
}

// To leave the specifics of highlighted and selected appearance to the SlideCarrierView's implementation, we mirror NSCollectionViewItem's "highlightState" and "selected" properties to it.
@property NSCollectionViewItemHighlightState highlightState;
@property (getter=isSelected) BOOL selected;

@end

NS_ASSUME_NONNULL_END
