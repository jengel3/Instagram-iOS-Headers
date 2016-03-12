
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFindUsersViewController.h>
#import <Instagram/IGFindFriendsHelperDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@class IGFacebookFriendsHelper, IGFindUsersViewDataSource, NSString;

@interface IGFacebookFriendsViewController : IGFindUsersViewController <IGFindFriendsHelperDelegate, IGRaindropAnalyticsDelegate> {

	char _shouldUseRankedList;
	IGFacebookFriendsHelper* _helper;
	IGFindUsersViewDataSource* _dataSource;
	int _friendsCount;

}

@property (nonatomic,retain) IGFacebookFriendsHelper * helper;                    //@synthesize helper=_helper - In the implementation block
@property (nonatomic,retain) IGFindUsersViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) int friendsCount;                                    //@synthesize friendsCount=_friendsCount - In the implementation block
@property (assign,nonatomic) char shouldUseRankedList;                            //@synthesize shouldUseRankedList=_shouldUseRankedList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)authorizeAndFetchUsers;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(id)findUsersViewDataSource;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(id)newFindUsersView;
-(char)shouldUseRankedList;
-(void)setFriendsCount:(int)arg1 ;
-(int)friendsCount;
-(void)updateTotalFriendsCount:(int)arg1 ;
-(void)findUsersView:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(void)findUsersView:(id)arg1 didLoadAllUserIDs:(id)arg2 ;
-(void)setShouldUseRankedList:(char)arg1 ;
-(IGFacebookFriendsHelper *)helper;
-(void)setHelper:(IGFacebookFriendsHelper *)arg1 ;
-(void)setDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)dealloc;
-(id)init;
-(IGFindUsersViewDataSource *)dataSource;
@end

