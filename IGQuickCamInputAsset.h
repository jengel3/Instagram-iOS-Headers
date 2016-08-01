

@protocol IGQuickCamInputAsset <NSObject>
@property (nonatomic,readonly) char isFromLibrary; 
@property (nonatomic,readonly) int devicePosition; 
@property (nonatomic,readonly) int flashMode; 
@required
-(char)isFromLibrary;
-(int)devicePosition;
-(int)flashMode;

@end

