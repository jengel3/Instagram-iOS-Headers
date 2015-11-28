
#import <Instagram/FBDialogsParams.h>

@class NSURL, NSString;

@interface FBInvitesDialogParams : FBDialogsParams {

	NSURL* _appLinkURL;
	NSURL* _previewImageURL;
	NSString* _data;

}

@property (nonatomic,copy) NSURL * appLinkURL;                   //@synthesize appLinkURL=_appLinkURL - In the implementation block
@property (nonatomic,copy) NSURL * previewImageURL;              //@synthesize previewImageURL=_previewImageURL - In the implementation block
@property (nonatomic,copy) NSString * data;                      //@synthesize data=_data - In the implementation block
-(void)setAppLinkURL:(NSURL *)arg1 ;
-(id)dictionaryMethodArgs;
-(NSURL *)appLinkURL;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(id)validate;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
-(NSURL *)previewImageURL;
@end

