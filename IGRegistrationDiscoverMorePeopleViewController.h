
#import <Instagram/IGDiscoverMorePeopleViewController.h>

@protocol IGRegistrationDiscoverMorePeopleDelegate;
@interface IGRegistrationDiscoverMorePeopleViewController : IGDiscoverMorePeopleViewController {

	id<IGRegistrationDiscoverMorePeopleDelegate> _delegate;
	int _findFriendsSource;

}

@property (assign,nonatomic,__weak) id<IGRegistrationDiscoverMorePeopleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int findFriendsSource;                                                     //@synthesize findFriendsSource=_findFriendsSource - In the implementation block
-(char)disableNavigationGesture;
-(void)updateNavigationRightBarButtonItem;
-(void)authorizeAndFetchUsers;
-(void)selectNextButton;
-(int)findFriendsSource;
-(void)setFindFriendsSource:(int)arg1 ;
-(void)setDelegate:(id<IGRegistrationDiscoverMorePeopleDelegate>)arg1 ;
-(id<IGRegistrationDiscoverMorePeopleDelegate>)delegate;
@end

