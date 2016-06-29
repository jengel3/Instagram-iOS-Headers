
@class UIView;


@protocol IGDirectCellProtocol <NSObject>
@property (nonatomic,readonly) UIView * contentContainerView; 
@required
-(void)setProfilePictureAlpha:(float)arg1;
-(float)cellContentYOffset;
-(UIView *)contentContainerView;

@end

