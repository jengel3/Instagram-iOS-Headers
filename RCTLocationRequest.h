

#import <Instagram/Instagram-Structs.h>
@class NSTimer;

@interface RCTLocationRequest : NSObject {

	/*^block*/id _successBlock;
	/*^block*/id _errorBlock;
	NSTimer* _timeoutTimer;
	SCD_Struct_RC122 _options;

}

@property (nonatomic,copy) id successBlock;                         //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id errorBlock;                           //@synthesize errorBlock=_errorBlock - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC122 options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(id)successBlock;
-(void)setSuccessBlock:(id)arg1 ;
-(id)errorBlock;
-(void)setErrorBlock:(id)arg1 ;
-(void)dealloc;
-(void)setOptions:(SCD_Struct_RC122)arg1 ;
-(SCD_Struct_RC122)options;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
@end

