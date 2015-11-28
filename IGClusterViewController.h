
#import <Instagram/IGFindUsersViewController.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@class NSString, NSMutableSet;

@interface IGClusterViewController : IGFindUsersViewController <IGRaindropAnalyticsDelegate> {

	NSString* _key;
	NSMutableSet* _displayedUsers;

}

@property (nonatomic,copy) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableSet * displayedUsers;              //@synthesize displayedUsers=_displayedUsers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(char)enableNavState;
-(void)findUsersView:(id)arg1 didTapOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(NSMutableSet *)displayedUsers;
-(void)updateNavigationRightBarButtonItem;
-(id)newFindUsersView;
-(void)authorizeAndFetchUsers;
-(id)newFindUsersViewDataSource;
-(void)findUsersView:(id)arg1 willDisplayOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)setDisplayedUsers:(NSMutableSet *)arg1 ;
-(id)initWithKey:(id)arg1 andName:(id)arg2 ;
-(NSString *)key;
-(int)viewType;
-(void)setKey:(NSString *)arg1 ;
@end

