
#import <Instagram/IGGraphQLParsing.h>

@class NSString;

@interface IGGraphQLBusinessConversionParser : NSObject <IGGraphQLParsing> {

	NSString* _rootString;

}

@property (nonatomic,copy) NSString * rootString;                   //@synthesize rootString=_rootString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parseGraphQLResponseWithResult:(id)arg1 error:(id*)arg2 ;
-(NSString *)rootString;
-(void)setRootString:(NSString *)arg1 ;
-(id)initWithRootString:(id)arg1 ;
@end

