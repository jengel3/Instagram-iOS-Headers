
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGAlbumViewerCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGUser, IGUserSession, NSString;

@interface IGAlbumViewerItemController : IGListItemController <IGAlbumViewerCellDelegate, IGListItemType> {

	IGUser* _user;
	IGUserSession* _userSession;

}

@property (nonatomic,readonly) IGUser * user;                            //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;              //@synthesize userSession=_userSession - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)albumViewerCellDidTapHide:(id)arg1 ;
-(void)albumViewerCellDidTapUnhide:(id)arg1 ;
-(void)onFriendshipStatusReceived:(id)arg1 ;
-(void)updateForFriendshipChange;
-(void)showHideAlert;
-(void)showUnhideActionSheet;
-(void)pushProfileViewController;
-(void)updateReelBlockStatus:(char)arg1 ;
-(IGUser *)user;
-(void)dealloc;
-(id)init;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGUserSession *)userSession;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

