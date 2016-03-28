
#import <Instagram/IGDKDiffable.h>

@class NSArray;

@interface IGHScrollAYMFModel : NSObject <IGDKDiffable> {

	NSArray* _userInfos;

}

@property (nonatomic,readonly) NSArray * userInfos;              //@synthesize userInfos=_userInfos - In the implementation block
-(id)diffIdentifier;
-(id)initWithFeaturedUserInfos:(id)arg1 ;
-(NSArray *)userInfos;
@end

