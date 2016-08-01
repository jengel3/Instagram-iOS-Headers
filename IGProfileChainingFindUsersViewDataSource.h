
#import <Instagram/IGFindUsersViewDataSource.h>

@class IGUser;

@interface IGProfileChainingFindUsersViewDataSource : IGFindUsersViewDataSource {

	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;              //@synthesize user=_user - In the implementation block
-(void)fetchMore;
-(void)fetchList;
-(id)requestWithMaxId:(id)arg1 ;
-(id)parseListResponse:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
@end

