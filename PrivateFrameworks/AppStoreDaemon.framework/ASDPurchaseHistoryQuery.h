/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding> {
    long long  _accountID;
    long long  _isFirstParty;
    long long  _isHidden;
    long long  _isPreorder;
    NSString * _searchTerm;
    NSArray * _sortOptions;
    NSArray * _storeIDs;
}

@property long long accountID;
@property long long isFirstParty;
@property long long isHidden;
@property long long isPreorder;
@property (copy) NSString *searchTerm;
@property (copy) NSArray *sortOptions;
@property (copy) NSArray *storeIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accountID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)isFirstParty;
- (long long)isHidden;
- (long long)isPreorder;
- (id)searchTerm;
- (void)setAccountID:(long long)arg1;
- (void)setIsFirstParty:(long long)arg1;
- (void)setIsHidden:(long long)arg1;
- (void)setIsPreorder:(long long)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSortOptions:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (id)sortOptions;
- (id)storeIDs;

@end