

@protocol RCTAutoInsetsProtocol
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic) char automaticallyAdjustContentInsets; 
@required
-(char)automaticallyAdjustContentInsets;
-(void)setAutomaticallyAdjustContentInsets:(char)arg1;
-(void)refreshContentInset;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1;

@end

