
#import <Instagram/IGUserDefaults.h>

@class NSString;

@interface IGNonCurrentUserDefaults : IGUserDefaults {

	NSString* _userPK;

}

@property (nonatomic,copy) NSString * userPK;              //@synthesize userPK=_userPK - In the implementation block
+(id)nonCurrentUserDefaultsForUserPK:(id)arg1 ;
-(id)initWithUserPK:(id)arg1 ;
-(void)setUserPK:(NSString *)arg1 ;
-(NSString *)userPK;
-(id)currentUserPK;
@end

