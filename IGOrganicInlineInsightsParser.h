
#import <Instagram/IGGraphQLParsing.h>

@class NSString;

@interface IGOrganicInlineInsightsParser : NSObject <IGGraphQLParsing> {

	NSString* _mediaID;

}

@property (nonatomic,copy,readonly) NSString * mediaID;              //@synthesize mediaID=_mediaID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)mediaID;
-(id)parseGraphQLResponseWithResult:(id)arg1 error:(id*)arg2 ;
-(id)validateJSONResponse:(id)arg1 ;
-(id)initWithMediaID:(id)arg1 ;
-(id)parseInsightsWithDictionary:(id)arg1 ;
-(id)nullStateForInsights;
@end

