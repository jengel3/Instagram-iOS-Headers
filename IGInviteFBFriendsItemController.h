
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGInviteFBFriendCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGFBUserInfo, NSString;

@interface IGInviteFBFriendsItemController : IGListItemController <IGInviteFBFriendCellDelegate, IGListItemType> {

	IGFBUserInfo* _item;

}

@property (nonatomic,readonly) IGFBUserInfo * item;                 //@synthesize item=_item - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)fbFriendCell:(id)arg1 wantToInviteFBUser:(id)arg2 ;
-(id)cellClasses;
-(IGFBUserInfo *)item;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

