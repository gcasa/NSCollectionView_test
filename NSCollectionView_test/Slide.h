//
//  Slide.h
//  NSCollectionView_test
//
//  Created by Gregory Casamento on 11/30/21.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import "SlideImageView.h"

NS_ASSUME_NONNULL_BEGIN

@interface Slide : NSCollectionViewItem

@property (weak) IBOutlet NSTextField *titleTextField;
@property (weak) IBOutlet SlideImageView *imageView;
@property (weak) IBOutlet NSTextField *kindTextField;
@property (weak) IBOutlet NSTextField *dimensionsTextField;

@end

NS_ASSUME_NONNULL_END
