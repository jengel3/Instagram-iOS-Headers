

@class NSString;

@interface OAProblem : NSObject {

	NSString* problem;

}

@property (readonly) NSString * problem; 
+(id)problemWithResponseBody:(id)arg1 ;
+(id)validProblems;
+(id)SignatureMethodRejected;
+(id)ParameterAbsent;
+(id)VersionRejected;
+(id)ConsumerKeyUnknown;
+(id)TokenRejected;
+(id)SignatureInvalid;
+(id)NonceUsed;
+(id)TimestampRefused;
+(id)TokenExpired;
+(id)TokenNotRenewable;
-(id)initWithProblem:(id)arg1 ;
-(id)initWithResponseBody:(id)arg1 ;
-(char)isEqualToProblem:(id)arg1 ;
-(id)initWithPointer:(id)arg1 ;
-(void)dealloc;
-(char)isEqualToString:(id)arg1 ;
-(id)description;
-(int)code;
-(NSString *)problem;
-(char)isEqualTo:(id)arg1 ;
@end

