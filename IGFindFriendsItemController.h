
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGListItemType.h>

@class NSString;

@interface IGFindFriendsItemController : IGListItemController <IGListDisplayDelegate, IGListItemType>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(void)onTapFindFriendsButton:(id)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

