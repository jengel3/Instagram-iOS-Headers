

@protocol IGQuickCamInputAsset <NSObject>
@property (nonatomic,readonly) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition; 
@required
-(void)setDevicePosition:(int)arg1;
-(int)devicePosition;
-(char)isFromLibrary;

@end

