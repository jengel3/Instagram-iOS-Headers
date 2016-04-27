
#import <Instagram/IGQuickCamInputLibraryAsset.h>
#import <Instagram/IGQuickCamInputPhotoAsset.h>

@class PHAsset, ALAsset, NSString;

@interface IGQuickCamInputLibraryPhotoAsset : NSObject <IGQuickCamInputLibraryAsset, IGQuickCamInputPhotoAsset> {

	PHAsset* _phAsset;
	ALAsset* _alAsset;
	int _devicePosition;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition;                    //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,retain) PHAsset * phAsset;                     //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,retain) ALAsset * alAsset;                     //@synthesize alAsset=_alAsset - In the implementation block
-(char)isFromLibrary;
-(int)devicePosition;
-(PHAsset *)phAsset;
-(void)setPhAsset:(PHAsset *)arg1 ;
-(ALAsset *)alAsset;
-(void)setAlAsset:(ALAsset *)arg1 ;
-(void)setDevicePosition:(int)arg1 ;
@end

