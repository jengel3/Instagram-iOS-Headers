

@protocol IGQuickCamInputAsset <NSObject>
@property (nonatomic,readonly) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition; 
@required
-(void)setDevicePosition:(int)arg1;
-(char)isFromLibrary;
-(int)devicePosition;

@end

