

@protocol RCTAutoInsetsProtocol
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic) char automaticallyAdjustContentInsets; 
@required
-(void)refreshContentInset;
-(char)automaticallyAdjustContentInsets;
-(void)setAutomaticallyAdjustContentInsets:(char)arg1;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1;

@end

