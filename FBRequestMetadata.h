/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:17 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBRequest, NSDictionary, NSError;

@interface FBRequestMetadata : NSObject {

	FBRequest* _request;
	/*^block*/id _completionHandler;
	NSDictionary* _batchParameters;
	int _behavior;
	/*^block*/id _originalCompletionHandler;
	int _retryCount;
	id _originalResult;
	NSError* _originalError;

}

@property (nonatomic,retain) FBRequest * request;                       //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * batchParameters;              //@synthesize batchParameters=_batchParameters - In the implementation block
@property (assign,nonatomic) int behavior;                              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) id originalCompletionHandler;                //@synthesize originalCompletionHandler=_originalCompletionHandler - In the implementation block
@property (assign,nonatomic) int retryCount;                            //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) id originalResult;                         //@synthesize originalResult=_originalResult - In the implementation block
@property (nonatomic,retain) NSError * originalError;                   //@synthesize originalError=_originalError - In the implementation block
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 behavior:(int)arg4 ;
-(NSDictionary *)batchParameters;
-(void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3 ;
-(id)originalResult;
-(NSError *)originalError;
-(id)originalCompletionHandler;
-(void)setOriginalError:(NSError *)arg1 ;
-(void)setOriginalResult:(id)arg1 ;
-(void)setBatchParameters:(NSDictionary *)arg1 ;
-(void)setOriginalCompletionHandler:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(FBRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(int)behavior;
-(int)retryCount;
-(void)setRetryCount:(int)arg1 ;
-(void)setBehavior:(int)arg1 ;
-(void)setRequest:(FBRequest *)arg1 ;
@end

