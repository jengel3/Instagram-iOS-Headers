
@class NSNumber, NSString;


@protocol RCTEvent <NSObject>
@property (nonatomic,readonly) NSNumber * viewTag; 
@property (nonatomic,copy,readonly) NSString * eventName; 
@property (nonatomic,readonly) unsigned short coalescingKey; 
@required
+(id)moduleDotMethod;
-(id)coalesceWithEvent:(id)arg1;
-(NSNumber *)viewTag;
-(unsigned short)coalescingKey;
-(char)canCoalesce;
-(NSString *)eventName;
-(id)arguments;

@end

