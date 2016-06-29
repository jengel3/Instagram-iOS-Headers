

#import <Instagram/Instagram-Structs.h>
@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput;

@interface IGVideoReader : NSObject {

	AVAsset* _asset;
	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _assetReaderVideoOutput;
	AVAssetReaderTrackOutput* _assetReaderAudioOutput;

}

@property (nonatomic,retain) AVAsset * asset;                                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAssetReader * assetReader;                                    //@synthesize assetReader=_assetReader - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * assetReaderVideoOutput;              //@synthesize assetReaderVideoOutput=_assetReaderVideoOutput - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * assetReaderAudioOutput;              //@synthesize assetReaderAudioOutput=_assetReaderAudioOutput - In the implementation block
-(AVAssetReaderTrackOutput *)assetReaderVideoOutput;
-(AVAssetReaderTrackOutput *)assetReaderAudioOutput;
-(opaqueCMSampleBufferRef)copyNextVideoSampleBuffer;
-(opaqueCMSampleBufferRef)copyNextAudioSampleBuffer;
-(void)setAssetReaderVideoOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(void)setAssetReaderAudioOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(void)seekToTime:(SCD_Struct_IG77)arg1 ;
-(void)prepare;
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)setAssetReader:(AVAssetReader *)arg1 ;
-(AVAssetReader *)assetReader;
@end

