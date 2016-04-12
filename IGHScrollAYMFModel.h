
#import <Instagram/IGDKDiffable.h>

@class NSArray, NSString;

@interface IGHScrollAYMFModel : NSObject <IGDKDiffable> {

	NSArray* _userInfos;
	NSString* _title;
	NSString* _actionText;

}

@property (nonatomic,readonly) NSArray * userInfos;                     //@synthesize userInfos=_userInfos - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionText;              //@synthesize actionText=_actionText - In the implementation block
-(id)diffIdentifier;
-(NSString *)actionText;
-(id)initWithAYMFDict:(id)arg1 ;
-(NSString *)title;
-(NSArray *)userInfos;
@end

