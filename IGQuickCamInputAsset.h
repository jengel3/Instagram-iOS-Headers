

@protocol IGQuickCamInputAsset <NSObject>
@property (nonatomic,readonly) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition; 
@required
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1;

@end

