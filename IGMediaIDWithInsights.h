

@class NSString, NSNumber;

@interface IGMediaIDWithInsights : NSObject {

	NSString* _mediaID;
	NSNumber* _impressionCount;
	NSNumber* _reachCount;

}

@property (nonatomic,copy,readonly) NSString * mediaID;                      //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * impressionCount;              //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * reachCount;                   //@synthesize reachCount=_reachCount - In the implementation block
-(NSString *)mediaID;
-(id)initWithMediaID:(id)arg1 impressionCount:(id)arg2 reachCount:(id)arg3 ;
-(NSNumber *)impressionCount;
-(NSNumber *)reachCount;
@end

