/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGVideoRendererDelegate.h>

@class NSMutableArray, NSString;

@interface IGVideoRenderQueue : NSObject <IGVideoRendererDelegate> {

	NSMutableArray* _renderQueue;
	NSMutableArray* _hibernaculum;

}

@property (nonatomic,retain) NSMutableArray * renderQueue;               //@synthesize renderQueue=_renderQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * hibernaculum;              //@synthesize hibernaculum=_hibernaculum - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRenderQueue;
-(void)cancelRenderWithMetadata:(id)arg1 ;
-(void)setRenderQueue:(NSMutableArray *)arg1 ;
-(void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 metadata:(id)arg3 canceled:(char)arg4 ;
-(void)videoRenderer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)onAppForeground;
-(void)renderVideo:(id)arg1 withMetadata:(id)arg2 ;
-(void)saveRenderWithMetadataWhenDone:(id)arg1 ;
-(void)onAppBackground;
-(void)renderVideo:(id)arg1 withMetadata:(id)arg2 retryCount:(unsigned)arg3 ;
-(id)renderWithMetadata:(id)arg1 ;
-(void)saveRenderToPhotoLibrary:(id)arg1 ;
-(void)setHibernaculum:(NSMutableArray *)arg1 ;
-(NSMutableArray *)hibernaculum;
-(void)dealloc;
-(id)init;
-(NSMutableArray *)renderQueue;
@end

