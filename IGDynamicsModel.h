

@class IGDynamicsProperties;

@interface IGDynamicsModel : NSObject {

	char _isDone;
	IGDynamicsProperties* _properties;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) IGDynamicsProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) char isDone;                                  //@synthesize isDone=_isDone - In the implementation block
@property (nonatomic,copy) id completionBlock;                               //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)callCompletionHandlerWithCompleted:(char)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(IGDynamicsProperties *)properties;
-(void)setProperties:(IGDynamicsProperties *)arg1 ;
-(char)isDone;
-(void)step:(double)arg1 ;
-(char)notify;
@end

