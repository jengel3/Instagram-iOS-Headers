

@interface OnePasswordExtension : NSObject
+(id)systemAppExtensionAPINotAvailableError;
+(id)failedToContactExtensionErrorWithActivityError:(id)arg1 ;
+(id)extensionCancelledByUserError;
+(id)failedToObtainURLStringFromWebViewError;
+(id)failedToFillFieldsErrorWithLocalizedErrorMessage:(id)arg1 underlyingError:(id)arg2 ;
+(id)failedToLoadItemProviderDataErrorWithUnderlyingError:(id)arg1 ;
+(id)sharedExtension;
+(id)failedToCollectFieldsErrorWithUnderlyingError:(id)arg1 ;
-(char)isSystemAppExtensionAPIAvailable;
-(id)activityViewControllerForItem:(id)arg1 viewController:(id)arg2 sender:(id)arg3 typeIdentifier:(id)arg4 ;
-(void)processExtensionItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fillItemIntoUIWebView:(id)arg1 webViewController:(id)arg2 sender:(id)arg3 showOnlyLogins:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)createExtensionItemForURLString:(id)arg1 webPageDetails:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)executeFillScript:(id)arg1 inWebView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)findLoginIn1PasswordWithURLString:(id)arg1 collectedPageDetails:(id)arg2 forWebViewController:(id)arg3 sender:(id)arg4 withWebView:(id)arg5 showOnlyLogins:(char)arg6 completion:(/*^block*/id)arg7 ;
-(void)fillItemIntoWebView:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 showOnlyLogins:(char)arg4 completion:(/*^block*/id)arg5 ;
-(char)isAppExtensionAvailable;
-(void)findLoginForURLString:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)storeLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)changePasswordForLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(/*^block*/id)arg6 ;
-(char)isOnePasswordExtensionActivityType:(id)arg1 ;
-(void)createExtensionItemForWebView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fillReturnedItems:(id)arg1 intoWebView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fillLoginIntoWebView:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

