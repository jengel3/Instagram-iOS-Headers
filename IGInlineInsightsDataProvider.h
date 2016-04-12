
#import <Instagram/IGGraphQLParsing.h>

@class NSString, IGBusinessGraphQLService;

@interface IGInlineInsightsDataProvider : NSObject <IGGraphQLParsing> {

	char _isFetching;
	NSString* _mediaID;
	IGBusinessGraphQLService* _service;

}

@property (assign,nonatomic) char isFetching;                                   //@synthesize isFetching=_isFetching - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaID;                         //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,readonly) IGBusinessGraphQLService * service;              //@synthesize service=_service - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)mediaID;
-(id)parseGraphQLResponseWithResult:(id)arg1 error:(id*)arg2 ;
-(id)validateJSONResponse:(id)arg1 ;
-(void)queryInsightsForMediaWithID:(id)arg1 successHandler:(/*^block*/id)arg2 failHandler:(/*^block*/id)arg3 ;
-(id)init;
-(IGBusinessGraphQLService *)service;
-(char)isFetching;
-(void)setIsFetching:(char)arg1 ;
@end

