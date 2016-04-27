

@class NSURL, NSString;

@interface IGPreselectedAssetIdentifier : NSObject {

	NSURL* _assetURL;
	NSString* _localIdentifier;
	NSURL* _identifierURL;
	int _assetType;

}

@property (nonatomic,readonly) NSURL * assetURL;                        //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * identifierURL;                   //@synthesize identifierURL=_identifierURL - In the implementation block
@property (nonatomic,readonly) int assetType;                           //@synthesize assetType=_assetType - In the implementation block
+(id)preselectedIdentifierWithAssetIdentifier:(id)arg1 assetType:(int)arg2 ;
+(id)preselectedIdentifierWithURL:(id)arg1 assetType:(int)arg2 ;
-(id)initWithAssetURL:(id)arg1 localIdentifier:(id)arg2 identifierURL:(id)arg3 assetType:(int)arg4 ;
-(NSURL *)identifierURL;
-(NSString *)localIdentifier;
-(NSURL *)assetURL;
-(int)assetType;
@end

