

@class NSString, NSArray;

@interface RCTErrorInfo : NSObject {

	NSString* _errorMessage;
	NSArray* _stack;

}

@property (nonatomic,copy,readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stack;                      //@synthesize stack=_stack - In the implementation block
-(id)initWithErrorMessage:(id)arg1 stack:(id)arg2 ;
-(NSArray *)stack;
-(NSString *)errorMessage;
@end

