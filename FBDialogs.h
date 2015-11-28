

@interface FBDialogs : NSObject
+(id)presentInvitesDialogWithParams:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)composeViewControllerWithSession:(id)arg1 handler:(/*^block*/id)arg2 ;
+(char)cancelAppCallBecauseOfRestrictedTreatment:(/*^block*/id)arg1 ;
+(id)presentShareDialogWithParams:(id)arg1 bridgeScheme:(id)arg2 clientState:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)presentShareDialogWithLink:(id)arg1 name:(id)arg2 caption:(id)arg3 description:(id)arg4 picture:(id)arg5 clientState:(id)arg6 handler:(/*^block*/id)arg7 ;
+(id)presentShareDialogWithParams:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)presentShareDialogWithPhotos:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)presentShareDialogWithPhotoParams:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)presentShareDialogWithOpenGraphActionParams:(id)arg1 bridgeScheme:(id)arg2 clientState:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)presentShareDialogWithOpenGraphAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3 clientState:(id)arg4 handler:(/*^block*/id)arg5 ;
+(id)presentShareDialogWithOpenGraphActionParams:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)eventNameForParams:(id)arg1 bridgeScheme:(id)arg2 ;
+(id)presentMessageDialogWithOpenGraphActionParams:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)presentMessageDialogWithOpenGraphAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3 clientState:(id)arg4 handler:(/*^block*/id)arg5 ;
+(id)presentMessageDialogWithPhotoParams:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)presentMessageDialogWithPhotos:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)presentMessageDialogWithParams:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)presentMessageDialogWithLink:(id)arg1 name:(id)arg2 caption:(id)arg3 description:(id)arg4 picture:(id)arg5 clientState:(id)arg6 handler:(/*^block*/id)arg7 ;
+(char)canPresentOSIntegratedShareDialog;
+(id)createError:(id)arg1 session:(id)arg2 ;
+(char)canPresentShareDialog;
+(char)canPresentShareDialogWithParams:(id)arg1 ;
+(char)canPresentShareDialogWithPhotos;
+(id)presentShareDialogWithLink:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)presentShareDialogWithLink:(id)arg1 name:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)presentShareDialogWithPhotos:(id)arg1 handler:(/*^block*/id)arg2 ;
+(char)canPresentShareDialogWithOpenGraphActionParams:(id)arg1 ;
+(id)presentShareDialogWithOpenGraphAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3 handler:(/*^block*/id)arg4 ;
+(char)canPresentMessageDialog;
+(char)canPresentMessageDialogWithOpenGraphActionParams:(id)arg1 ;
+(char)canPresentMessageDialogWithParams:(id)arg1 ;
+(char)canPresentMessageDialogWithPhotos;
+(id)presentMessageDialogWithOpenGraphAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)presentMessageDialogWithPhotos:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)presentMessageDialogWithLink:(id)arg1 name:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)presentMessageDialogWithLink:(id)arg1 handler:(/*^block*/id)arg2 ;
+(char)canPresentLikeDialog;
+(id)presentLikeDialogWithParams:(id)arg1 clientState:(id)arg2 handler:(/*^block*/id)arg3 ;
+(char)presentOSIntegratedShareDialogModallyFrom:(id)arg1 initialText:(id)arg2 image:(id)arg3 url:(id)arg4 handler:(/*^block*/id)arg5 ;
+(char)presentOSIntegratedShareDialogModallyFrom:(id)arg1 initialText:(id)arg2 images:(id)arg3 urls:(id)arg4 handler:(/*^block*/id)arg5 ;
+(char)presentOSIntegratedShareDialogModallyFrom:(id)arg1 session:(id)arg2 initialText:(id)arg3 images:(id)arg4 urls:(id)arg5 handler:(/*^block*/id)arg6 ;
+(char)canPresentOSIntegratedShareDialogWithSession:(id)arg1 ;
+(char)canPresentInvitesDialogWithParams:(id)arg1 ;
@end

