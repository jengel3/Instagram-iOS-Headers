

@interface FBNativeDialogs : NSObject
+(char)canPresentShareDialogWithSession:(id)arg1 ;
+(char)presentShareDialogModallyFrom:(id)arg1 initialText:(id)arg2 image:(id)arg3 url:(id)arg4 handler:(/*^block*/id)arg5 ;
+(/*^block*/id)handlerFromHandler:(/*^block*/id)arg1 ;
+(char)presentShareDialogModallyFrom:(id)arg1 initialText:(id)arg2 images:(id)arg3 urls:(id)arg4 handler:(/*^block*/id)arg5 ;
+(char)presentShareDialogModallyFrom:(id)arg1 session:(id)arg2 initialText:(id)arg3 images:(id)arg4 urls:(id)arg5 handler:(/*^block*/id)arg6 ;
@end

