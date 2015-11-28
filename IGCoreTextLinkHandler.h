

@protocol IGCoreTextLinkHandler <NSObject>
@optional
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;

@required
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;

@end

