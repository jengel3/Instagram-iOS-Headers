
@class NSNumber, NSString;


@protocol RCTEvent <NSObject>
@property (nonatomic,readonly) NSNumber * viewTag; 
@property (nonatomic,copy,readonly) NSString * eventName; 
@required
+(id)moduleDotMethod;
-(char)canCoalesce;
-(id)coalesceWithEvent:(id)arg1;
-(NSNumber *)viewTag;
-(NSString *)eventName;
-(id)arguments;

@end

