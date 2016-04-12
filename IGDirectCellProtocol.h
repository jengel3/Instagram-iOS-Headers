
@class UIView;


@protocol IGDirectCellProtocol <NSObject>
@property (nonatomic,readonly) UIView * contentContainerView; 
@required
-(float)cellContentYOffset;
-(void)setProfilePictureAlpha:(float)arg1;
-(UIView *)contentContainerView;

@end

