/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGVideoWriterDelegate <NSObject>
@required
-(CVBufferRef)nextRenderedPixelBufferForVideoWriter:(id)arg1 withAdaptor:(id)arg2 getPresentationTime:(SCD_Struct_IG47*)arg3;
-(opaqueCMSampleBufferRef)nextAudioSampleBufferForVideoWriter:(id)arg1;
-(void)videoWriter:(id)arg1 didFinishWritingVideoToURL:(id)arg2;
-(void)videoWriter:(id)arg1 didFailWithError:(id)arg2;

@end

