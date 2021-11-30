//
//  AppDelegate.m
//  NSCollectionView_test
//
//  Created by Gregory Casamento on 5/30/21.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@property (strong) IBOutlet NSWindow *window;
@property (strong) IBOutlet NSCollectionView *collectionView;
@property (strong) IBOutlet NSPopUpButton *popupButton;

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
}


- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

- (IBAction) updateLayout: (id)sender
{
    
}

// CollectionView data source
- (NSInteger)collectionView:(NSCollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return 10;
}

- (NSCollectionViewItem *)collectionView:(NSCollectionView *)collectionView itemForRepresentedObjectAtIndexPath:(NSIndexPath *)indexPath
{
    NSCollectionViewItem *item = [collectionView makeItemWithIdentifier:@"Slide" forIndexPath:indexPath];
    NSImage *image = nil;
    item.representedObject = image;
    
    return item;
    //NSCollectionViewItem *item = [[NSCollectionViewItem alloc] init];
    //item.textField.stringValue = [NSString stringWithFormat: @"%ld", (long)indexPath.item];
    //return item;
}
@end
