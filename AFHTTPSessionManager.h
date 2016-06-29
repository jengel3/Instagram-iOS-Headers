
#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFURLSessionManager.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AFURLRequestSerialization;
@class NSURL, AFHTTPRequestSerializer, AFNetworkReachabilityManager;

@interface AFHTTPSessionManager : AFURLSessionManager <NSCoding, NSCopying> {

	NSURL* _baseURL;
	AFHTTPRequestSerializer*<AFURLRequestSerialization> _requestSerializer;

}

@property (nonatomic,retain) NSURL * baseURL;                                                                       //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) AFNetworkReachabilityManager * reachabilityManager; 
@property (nonatomic,retain) AFHTTPRequestSerializer*<AFURLRequestSerialization> requestSerializer;                 //@synthesize requestSerializer=_requestSerializer - In the implementation block
@property (nonatomic,retain) AFHTTPResponseSerializer*<AFURLResponseSerialization> responseSerializer; 
+(id)manager;
-(void)setRequestSerializer:(AFHTTPRequestSerializer*<AFURLRequestSerialization>)arg1 ;
-(void)setResponseSerializer:(AFHTTPResponseSerializer*<AFURLResponseSerialization>)arg1 ;
-(AFHTTPRequestSerializer*<AFURLRequestSerialization>)requestSerializer;
-(id)GET:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)HEAD:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)POST:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(/*^block*/id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(id)PUT:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)PATCH:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)DELETE:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)initWithBaseURL:(id)arg1 sessionConfiguration:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
@end

