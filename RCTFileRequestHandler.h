/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/RCTURLRequestHandler.h>
#import <Instagram/RCTInvalidating.h>

@class NSOperationQueue, NSString, RCTBridge;

@interface RCTFileRequestHandler : NSObject <RCTURLRequestHandler, RCTInvalidating> {

	NSOperationQueue* _fileQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(id)sendRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)invalidate;
-(void)cancelRequest:(id)arg1 ;
-(char)canHandleRequest:(id)arg1 ;
@end
