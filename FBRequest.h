/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:53 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBRequestDelegate, FBGraphObject;
#import <Instagram/Instagram-Structs.h>
@class NSString, NSURLConnection, NSMutableData, NSError, NSMutableDictionary, FBSession;

@interface FBRequest : NSObject {

	id<FBRequestDelegate> _delegate;
	NSString* _url;
	NSString* _versionPart;
	NSURLConnection* _connection;
	NSMutableData* _responseText;
	unsigned _state;
	NSError* _error;
	char _sessionDidExpire;
	id<FBGraphObject> _graphObject;
	char _canCloseSessionOnError;
	char _skipClientToken;
	NSMutableDictionary* _parameters;
	FBSession* _session;
	NSString* _graphPath;
	NSString* _restMethod;
	NSString* _HTTPMethod;

}

@property (assign,nonatomic) id<FBRequestDelegate> delegate; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * httpMethod; 
@property (nonatomic,retain) NSMutableDictionary * params; 
@property (nonatomic,retain) NSURLConnection * connection; 
@property (nonatomic,retain) NSMutableData * responseText; 
@property (assign,nonatomic) unsigned state; 
@property (assign,nonatomic) char sessionDidExpire; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain,readonly) NSMutableDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) FBSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * graphPath;                                     //@synthesize graphPath=_graphPath - In the implementation block
@property (nonatomic,copy) NSString * restMethod;                                    //@synthesize restMethod=_restMethod - In the implementation block
@property (nonatomic,copy) NSString * HTTPMethod;                                    //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (nonatomic,retain) id<FBGraphObject> graphObject; 
@property (assign,nonatomic) char canCloseSessionOnError;                            //@synthesize canCloseSessionOnError=_canCloseSessionOnError - In the implementation block
@property (assign,nonatomic) char skipClientToken;                                   //@synthesize skipClientToken=_skipClientToken - In the implementation block
@property (readonly) NSString * versionPart; 
+(id)requestForMe;
+(id)requestWithGraphPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3 ;
+(id)serializeURL:(id)arg1 params:(id)arg2 ;
+(id)requestForGraphPath:(id)arg1 ;
+(id)requestForUpdateOpenGraphObjectWithId:(id)arg1 graphObject:(id)arg2 ;
+(id)requestForMyFriends;
+(id)requestForUploadPhoto:(id)arg1 ;
+(id)requestForPostStatusUpdate:(id)arg1 ;
+(id)requestForPostStatusUpdate:(id)arg1 place:(id)arg2 tags:(id)arg3 ;
+(id)requestForPlacesSearchAtCoordinate:(SCD_Struct_IG30)arg1 radiusInMeters:(int)arg2 resultsLimit:(int)arg3 searchText:(id)arg4 ;
+(id)requestForCustomAudienceThirdPartyID:(id)arg1 ;
+(id)requestForDeleteObject:(id)arg1 ;
+(id)requestForPostWithGraphPath:(id)arg1 graphObject:(id)arg2 ;
+(id)requestForPostOpenGraphObject:(id)arg1 ;
+(id)requestForPostOpenGraphObjectWithType:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 objectProperties:(id)arg6 ;
+(id)requestForUpdateOpenGraphObject:(id)arg1 ;
+(id)requestForUpdateOpenGraphObjectWithId:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 objectProperties:(id)arg6 ;
+(id)requestForUploadStagingResourceWithImage:(id)arg1 ;
+(id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 ;
-(id)initWithSession:(id)arg1 graphPath:(id)arg2 parameters:(id)arg3 HTTPMethod:(id)arg4 ;
-(void)overrideVersionPartWith:(id)arg1 ;
-(void)setSkipClientToken:(char)arg1 ;
-(id<FBGraphObject>)graphObject;
-(id)initForPostWithSession:(id)arg1 graphPath:(id)arg2 graphObject:(id)arg3 ;
-(void)setCanCloseSessionOnError:(char)arg1 ;
-(void)setParams:(NSMutableDictionary *)arg1 ;
-(char)sessionDidExpire;
-(id)initWithSession:(id)arg1 graphPath:(id)arg2 ;
-(void)setGraphObject:(id<FBGraphObject>)arg1 ;
-(void)setRestMethod:(NSString *)arg1 ;
-(void)setGraphPath:(NSString *)arg1 ;
-(id)createRequestConnection;
-(void)setResponseText:(NSMutableData *)arg1 ;
-(NSString *)restMethod;
-(NSString *)versionPart;
-(NSString *)graphPath;
-(char)skipClientToken;
-(void)setSessionDidExpire:(char)arg1 ;
-(char)canCloseSessionOnError;
-(id)initWithSession:(id)arg1 restMethod:(id)arg2 parameters:(id)arg3 HTTPMethod:(id)arg4 ;
-(FBSession *)session;
-(NSError *)error;
-(NSMutableDictionary *)params;
-(void)setDelegate:(id<FBRequestDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<FBRequestDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSMutableDictionary *)parameters;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setSession:(FBSession *)arg1 ;
-(NSString *)httpMethod;
-(NSString *)HTTPMethod;
-(id)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(NSMutableData *)responseText;
-(char)loading;
-(void)setHttpMethod:(NSString *)arg1 ;
@end

