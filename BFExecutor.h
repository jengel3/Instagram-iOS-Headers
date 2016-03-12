

@interface BFExecutor : NSObject {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
+(id)executorWithBlock:(/*^block*/id)arg1 ;
+(id)defaultExecutor;
+(id)immediateExecutor;
+(id)mainThreadExecutor;
+(id)executorWithDispatchQueue:(id)arg1 ;
+(id)executorWithOperationQueue:(id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
@end

