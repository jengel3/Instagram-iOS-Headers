/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:04 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Instagram/Instagram-Structs.h>
@class NSURL, AVAssetWriter, AVAssetWriterInput, NSObject;

@interface IGVideoClipRecorder : NSObject {

	GLKMatrix4 _bufferTransform;
	int _position;
	NSURL* _outputFileURL;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _videoWriterInput;
	AVAssetWriterInput* _audioWriterInput;
	int _state;
	CFArrayRef _savedAudioBuffers;
	NSObject*<OS_dispatch_queue> _writeQueue;
	CGSize _videoSize;
	SCD_Struct_IG47 _startSessionTime;
	SCD_Struct_IG47 _endSessionTime;
	SCD_Struct_IG47 _lastVideoFrameSourceTime;
	SCD_Struct_IG47 _lastAudioFrameSourceTime;

}

@property (nonatomic,readonly) float runningTime; 
@property (assign,nonatomic) int position;                                          //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) NSURL * outputFileURL;                                 //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (assign,nonatomic) CGSize videoSize;                                      //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,retain) AVAssetWriter * assetWriter;                           //@synthesize assetWriter=_assetWriter - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * videoWriterInput;                 //@synthesize videoWriterInput=_videoWriterInput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * audioWriterInput;                 //@synthesize audioWriterInput=_audioWriterInput - In the implementation block
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG47 startSessionTime;                      //@synthesize startSessionTime=_startSessionTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG47 endSessionTime;                        //@synthesize endSessionTime=_endSessionTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG47 lastVideoFrameSourceTime;              //@synthesize lastVideoFrameSourceTime=_lastVideoFrameSourceTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG47 lastAudioFrameSourceTime;              //@synthesize lastAudioFrameSourceTime=_lastAudioFrameSourceTime - In the implementation block
@property (assign,nonatomic) CFArrayRef savedAudioBuffers;                          //@synthesize savedAudioBuffers=_savedAudioBuffers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;               //@synthesize writeQueue=_writeQueue - In the implementation block
-(float)runningTime;
-(char)handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)relaseSavedAudioBuffers;
-(AVAssetWriterInput *)videoWriterInput;
-(AVAssetWriterInput *)audioWriterInput;
-(SCD_Struct_IG47)lastSharedBufferTime;
-(SCD_Struct_IG47)startSessionTime;
-(CFArrayRef)savedAudioBuffers;
-(void)releaseOldestAudioBuffer;
-(char)writeVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)writeAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)saveAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)doStopRecordingWithCompletionHandler:(/*^block*/id)arg1 ;
-(SCD_Struct_IG47)lastVideoFrameSourceTime;
-(SCD_Struct_IG47)lastAudioFrameSourceTime;
-(void)setStartSessionTime:(SCD_Struct_IG47)arg1 ;
-(void)setLastVideoFrameSourceTime:(SCD_Struct_IG47)arg1 ;
-(void)setLastAudioFrameSourceTime:(SCD_Struct_IG47)arg1 ;
-(id)initWithOutputFileURL:(id)arg1 videoSize:(CGSize)arg2 deviceOrientation:(int)arg3 ;
-(void)setVideoWriterInput:(AVAssetWriterInput *)arg1 ;
-(void)setAudioWriterInput:(AVAssetWriterInput *)arg1 ;
-(SCD_Struct_IG47)endSessionTime;
-(void)setEndSessionTime:(SCD_Struct_IG47)arg1 ;
-(void)setSavedAudioBuffers:(CFArrayRef)arg1 ;
-(CGSize)videoSize;
-(void)setVideoSize:(CGSize)arg1 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(NSURL *)outputFileURL;
-(void)startRecording;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)stopRecordingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)writeQueue;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
@end

