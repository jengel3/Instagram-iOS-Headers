

@class NSString;

@interface IGDelayedExecutorTask : NSObject {

	NSString* _name;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) id block;                     //@synthesize block=_block - In the implementation block
-(id)initWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)block;
-(NSString *)name;
@end

