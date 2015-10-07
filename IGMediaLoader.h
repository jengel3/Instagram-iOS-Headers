/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:14 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface IGMediaLoader : NSObject {

	NSMutableDictionary* _currentRequests;
	int _currentVideoRequests;
	NSMutableSet* _videoFetchURLsOnYield;
	char _enableConcurrencyTuning;

}

@property (assign) char enableConcurrencyTuning;              //@synthesize enableConcurrencyTuning=_enableConcurrencyTuning - In the implementation block
+(id)sharedMediaLoader;
-(void)loadImageForURL:(id)arg1 priority:(int)arg2 observer:(id)arg3 ;
-(void)removeObserver:(id)arg1 forURL:(id)arg2 ;
-(void)cancelYieldForOnScreenVideoFetch:(id)arg1 ;
-(void)yieldForOnScreenVideoFetch:(id)arg1 ;
-(void)setEnableConcurrencyTuning:(char)arg1 ;
-(void)loadImageForURL:(id)arg1 priority:(int)arg2 observer:(id)arg3 configureRequest:(/*^block*/id)arg4 ;
-(void)loadVideoForURL:(id)arg1 priority:(int)arg2 length:(long long)arg3 observer:(id)arg4 configureRequest:(/*^block*/id)arg5 ;
-(char)enableConcurrencyTuning;
-(int)currentOnScreenRequestsCount;
-(void)stopOffScreenRequests:(int)arg1 ;
-(void)doLoadImageForURL:(id)arg1 priority:(int)arg2 observer:(id)arg3 configureRequest:(/*^block*/id)arg4 ;
-(void)doLoadVideoForURL:(id)arg1 priority:(int)arg2 length:(long long)arg3 observer:(id)arg4 configureRequest:(/*^block*/id)arg5 ;
-(void)setRequest:(id)arg1 forURL:(id)arg2 ;
-(void)adjustConcurrencySettingIfNeeded;
-(id)requestForURL:(id)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

