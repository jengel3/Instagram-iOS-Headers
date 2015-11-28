

@class NSString, NSDictionary;

@interface FBDialogsData : NSObject {

	NSString* _method;
	NSDictionary* _arguments;
	NSDictionary* _clientState;
	NSDictionary* _results;

}

@property (nonatomic,copy) NSString * method;                       //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSDictionary * arguments;                //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) NSDictionary * clientState;              //@synthesize clientState=_clientState - In the implementation block
@property (nonatomic,copy) NSDictionary * results;                  //@synthesize results=_results - In the implementation block
-(id)initWithMethod:(id)arg1 arguments:(id)arg2 ;
-(void)setArguments:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isValid;
-(NSString *)method;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(NSDictionary *)clientState;
-(void)setClientState:(NSDictionary *)arg1 ;
-(NSDictionary *)arguments;
@end

