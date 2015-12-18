

@class NSURL, NSString;

@interface IGPreselectedAssetIdentifier : NSObject {

	NSURL* _assetURL;
	NSString* _localIdentifier;

}

@property (nonatomic,readonly) NSURL * assetURL;                        //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
-(id)initWithAssetURL:(id)arg1 localIdentifier:(id)arg2 ;
-(NSString *)localIdentifier;
-(NSURL *)assetURL;
@end

