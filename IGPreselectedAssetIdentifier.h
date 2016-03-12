

@class NSURL, NSString;

@interface IGPreselectedAssetIdentifier : NSObject {

	NSURL* _assetURL;
	NSString* _localIdentifier;
	NSString* _filePathOnDisk;
	int _assetType;

}

@property (nonatomic,readonly) NSURL * assetURL;                        //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * filePathOnDisk;               //@synthesize filePathOnDisk=_filePathOnDisk - In the implementation block
@property (nonatomic,readonly) int assetType;                           //@synthesize assetType=_assetType - In the implementation block
+(id)preselectedIdentifierWithAssetIdentifier:(id)arg1 assetType:(int)arg2 ;
+(id)preselectedIdentifierWithFilePathOnDisk:(id)arg1 assetType:(int)arg2 ;
-(id)initWithAssetURL:(id)arg1 localIdentifier:(id)arg2 filePathOnDisk:(id)arg3 assetType:(int)arg4 ;
-(NSString *)filePathOnDisk;
-(NSString *)localIdentifier;
-(NSURL *)assetURL;
-(int)assetType;
@end

