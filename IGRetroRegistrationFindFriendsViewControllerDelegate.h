

@protocol IGRetroRegistrationFindFriendsViewControllerDelegate <NSObject>
@required
-(void)findFriendsController:(id)arg1 wantsToUpdateToFollowCount:(int)arg2;
-(void)findFriendsControllerNextButtonTapped:(id)arg1;
-(void)findFriendsControllerSkipButtonTapped:(id)arg1;
-(void)findFriendsController:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4;
-(void)findFriendsController:(id)arg1 wantsToDismissViewControllerAnimated:(char)arg2 completion:(/*^block*/id)arg3;
-(void)findFriendsController:(id)arg1 wasTappedOnURL:(id)arg2;

@end

