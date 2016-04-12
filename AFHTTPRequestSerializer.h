
#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFURLRequestSerialization.h>

@class NSSet, NSMutableDictionary, NSDictionary, NSString;

@interface AFHTTPRequestSerializer : NSObject <AFURLRequestSerialization> {

	unsigned _stringEncoding;
	NSSet* _HTTPMethodsEncodingParametersInURI;
	NSMutableDictionary* _mutableHTTPRequestHeaders;
	unsigned _queryStringSerializationStyle;
	/*^block*/id _queryStringSerialization;

}

@property (assign,nonatomic) unsigned stringEncoding;                                      //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,readonly) NSDictionary * HTTPRequestHeaders; 
@property (nonatomic,retain) NSSet * HTTPMethodsEncodingParametersInURI;                   //@synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableHTTPRequestHeaders;              //@synthesize mutableHTTPRequestHeaders=_mutableHTTPRequestHeaders - In the implementation block
@property (assign,nonatomic) unsigned queryStringSerializationStyle;                       //@synthesize queryStringSerializationStyle=_queryStringSerializationStyle - In the implementation block
@property (nonatomic,copy) id queryStringSerialization;                                    //@synthesize queryStringSerialization=_queryStringSerialization - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializer;
-(void)setStringEncoding:(unsigned)arg1 ;
-(void)setMutableHTTPRequestHeaders:(NSMutableDictionary *)arg1 ;
-(void)setHTTPMethodsEncodingParametersInURI:(NSSet *)arg1 ;
-(NSMutableDictionary *)mutableHTTPRequestHeaders;
-(void)setQueryStringSerializationStyle:(unsigned)arg1 ;
-(void)setQueryStringSerialization:(id)arg1 ;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 ;
-(NSDictionary *)HTTPRequestHeaders;
-(id)queryStringSerialization;
-(unsigned)queryStringSerializationStyle;
-(NSSet *)HTTPMethodsEncodingParametersInURI;
-(void)setAuthorizationHeaderFieldWithUsername:(id)arg1 password:(id)arg2 ;
-(void)setAuthorizationHeaderFieldWithToken:(id)arg1 ;
-(void)clearAuthorizationHeader;
-(void)setQueryStringSerializationWithStyle:(unsigned)arg1 ;
-(void)setQueryStringSerializationWithBlock:(/*^block*/id)arg1 ;
-(id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(unsigned)stringEncoding;
@end

